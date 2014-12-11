//
//  TLAPIAdd.h
//  Messenger for Telegram
//
//  Created by Dmitry Kondratyev on 4/7/14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TLApiObject.h"

@interface TL_initConnection : TLObject
@property int api_id;
@property (nonatomic, strong) NSString *device_model;
@property (nonatomic, strong) NSString *system_version;
@property (nonatomic, strong) NSString *app_version;
@property (nonatomic, strong) NSString *lang_code;
@property (nonatomic, strong) id query;
@end

@interface TLAPI_photos_deletePhotos : TLApiObject
@property (nonatomic,strong) NSArray *n_id;
+(TLAPI_photos_deletePhotos *)createWithN_id:(NSArray *)n_id;

@end


@interface TL_invokeAfter : TLMsgResendReq
+(TL_invokeAfter*)createWithMsg_id:(long)msg_id query:(NSData*)query;
@end