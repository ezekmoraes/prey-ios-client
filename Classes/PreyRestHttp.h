//
//  RestHttpUser.h
//  Prey-iOS
//
//  Created by Carlos Yaconi on 18-03-10.
//  Copyright 2010 Fork Ltd.. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"
#import "Device.h"

@interface PreyRestHttp : NSObject

+ (void)checkTransaction:(NSString *)receiptData withBlock:(void (^)(NSHTTPURLResponse *response, NSError *error))block;
+ (void)getAppstoreConfig:(NSString *)URL withBlock:(void (^)(NSMutableSet *dataStore, NSError *error))block;
+ (void)createApiKey:(User *)user withBlock:(void (^)(NSString *apiKey, NSError *error))block;
+ (void)getCurrentControlPanelApiKey:(User *)user withBlock:(void (^)(NSString *apiKey, NSError *error))block;
+ (void)createDeviceKeyForDevice:(Device *)device usingApiKey:(NSString *)apiKey withBlock:(void (^)(NSString *deviceKey, NSError *error))block;
+ (void)checkStatusForDevice:(NSInteger)reload withBlock:(void (^)(NSHTTPURLResponse *response, NSError *error))block;;
+ (void)sendJsonData:(NSInteger)reload withData:(NSDictionary*)jsonData andRawData:(NSDictionary*)rawData toEndpoint:(NSString *)url withBlock:(void (^)(NSHTTPURLResponse *response, NSError *error))block;
+ (void)setPushRegistrationId:(NSInteger)reload  withToken:(NSString *)tokenId withBlock:(void (^)(NSHTTPURLResponse *response, NSError *error))block;
+ (void)deleteDevice:(void (^)(NSHTTPURLResponse *response, NSError *error))block;

@end
