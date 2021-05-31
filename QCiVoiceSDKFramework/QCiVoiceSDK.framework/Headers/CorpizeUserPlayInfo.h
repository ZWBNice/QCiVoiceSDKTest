//
//  UserPlayInfo.h
//  QCiVoiceSDK
//
//  Created by zwb on 2021/5/13.
//
//  SDK调用者的音频信息实体

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CorpizeUserPlayInfo : NSObject

/**音频标题 */
@property(nonatomic,copy)NSString *title;
/** 音频地址 */
@property (nonatomic, copy)NSString *url;
/**播放进度，0 - 100 完整播放 */
@property (nonatomic, assign) int progress;


@end

NS_ASSUME_NONNULL_END
