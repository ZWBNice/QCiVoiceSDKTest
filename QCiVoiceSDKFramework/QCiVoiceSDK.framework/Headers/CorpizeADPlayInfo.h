//
//  CorpizeADPlayInfo.h
//  QCiVoiceSDK
//  音频广告信息实体
//  Created by zwb on 2021/5/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CorpizeADPlayInfo : NSObject
/**音频标题 */
@property(nonatomic,copy)NSString *audioTitle;
/** 音频描述 */
@property (nonatomic, copy)NSString *audioDesc;
/** 音频地址 */
@property (nonatomic, copy)NSString *audioImage;

@end

NS_ASSUME_NONNULL_END
