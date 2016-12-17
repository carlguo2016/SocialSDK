//
//  GSShareProtocol.h
//  SocialSDKDemo
//
//  Created by lijunjie on 16/12/2016.
//  Copyright © 2016 GagSquad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GSPlatformType.h"

@protocol GSShareResultProtocol;

typedef void (^GSShareCompletionBlock) (id<GSShareResultProtocol> result);

@protocol GSShareProtocol <NSObject>

- (void)shareSimpleText:(NSString *)text;

- (BOOL)handleOpenURL:(NSURL *)url;

- (void)setShareCompletionBlock:(GSShareCompletionBlock)completionBlock;

- (GSPlatformType)platformType;

@end
