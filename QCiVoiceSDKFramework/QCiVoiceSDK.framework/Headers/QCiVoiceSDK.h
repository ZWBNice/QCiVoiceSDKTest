//
//  QCiVoiceSDK.h
//  QCiVoiceSDK
//
//  Created by River on 2020/12/25.
//

#import <Foundation/Foundation.h>
#import "CorpizeAudioAd.h"
#import "CorpizeAudioExpressFeedConfig.h"
#import "CorpizeAudioExpressFeedView.h"
#import "CorpizeUserPlayInfo.h"
#import "CorpizeADPlayInfo.h"


NS_ASSUME_NONNULL_BEGIN

@interface QCiVoiceSDK : NSObject

+(void)initializeSDK;
/**
 *  打开日志
 *
 *  @param isOpen YES代表打开，No代表关闭 默认关闭
 */
+(void)openLog:(BOOL)isOpen;

@end

NS_ASSUME_NONNULL_END
