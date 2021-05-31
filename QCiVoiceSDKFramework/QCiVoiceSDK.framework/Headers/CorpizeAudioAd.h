//
//  CorpizeAudioAd.h
//  QCAudioAdSDK
//
//  Created by River on 2020/12/16.
//

#import <Foundation/Foundation.h>
@protocol CorpizeAudioAdDelegate <NSObject>
@optional
//加载成功回调
-(void)corpizeAudioAdLoadSuccess;
//加载失败回调
-(void)corpizeAudioAdLoadFailure:(NSError *)error;
//广告曝光了回调
-(void)corpizeAudioAdExpoure;
//广告被关闭了回调
-(void)corpizeAudioAdClose;
//广告被点击了回调
-(void)corpizeAudioAdClick;

@end

@interface CorpizeAudioAd : NSObject

/**
 adid:广告位ID
 target:设置代理
 */
+(instancetype)AudioAdWithadid:(NSString *)adid target:(id)target;
+(instancetype)AudioAdWithadid:(NSString *)adid target:(id)target type:(NSInteger )type;
@end


