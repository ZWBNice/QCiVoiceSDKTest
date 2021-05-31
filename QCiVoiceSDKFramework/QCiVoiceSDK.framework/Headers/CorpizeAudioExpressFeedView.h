//
//  CorpizeAudioExpressFeedView.h
//  QCAudioAdSDK
//
//  Created by River on 2020/12/14.
//

#import <UIKit/UIKit.h>
@class CorpizeAudioExpressFeedConfig;
@class CorpizeAudioExpressFeedView;
@class CorpizeADPlayInfo;
@protocol CorpizeAudioExpressFeedViewDelegate <NSObject>
@optional
//设置弹幕frame(如果block设置frame了，代理设置就无效)
- (CGRect)barrageRenderViewOfExpressFeedView:(CorpizeAudioExpressFeedView *)expressFeedView titleFrame:(CGRect)titleFrame descFrame:(CGRect)descFrame ;
//广告加载成功了
-(void)loadExpressFeedSuccess;
//广告加载失败了
-(void)loadExpressFeedFailure;
//广告曝光了
-(void)expressFeedAdExpoure;
//广告被点击了
-(void)expressFeedAdClick;
//广告摇一摇回调
-(void)expressFeedAdShake;
//点击弹幕
-(void)expressFeedBarrageClick:(NSString *)userId avatar:(NSString *)avatar;
//播放完成
-(void)expressFeedPlayFinish;

// 自定义发送弹幕弹出视图
// 弹幕按钮点击 可进行自定义弹出视图 如果设置了这个方法 sdk内部将不在创建默认弹出视图
-(void)barrageBtnClick;
//发送弹幕成功了
-(void)sendBarrageSuccess;
//发送弹幕失败了
-(void)sendBarrageFailureWithError:(NSError*)error;

@end


typedef void(^CorpizeLoadExpressFeedStateBlock)(BOOL isSuccess);
typedef CGRect(^SetBarrageRenderViewFrameBlock)(CGRect titleFrame,CGRect descFrame);


@interface CorpizeAudioExpressFeedView : UIView
@property(nonatomic,weak)id<CorpizeAudioExpressFeedViewDelegate> delegate;
//是否加载成功
@property(nonatomic)BOOL loadSuccess;
//是否渲染成功
@property(nonatomic,readonly)BOOL isExpressFeed;
//是否播放完成
@property(nonatomic,readonly)BOOL isPlayFinish;
//广告信息
@property(nonatomic,readonly,strong)CorpizeADPlayInfo *adPlayInfo;


+(instancetype)audioExpressFeedView:(CGRect)frame adid:(NSString *)adid mid:(NSString *)mid config:(CorpizeAudioExpressFeedConfig *)config ;
//设置弹幕显示区域frame
@property(nonatomic,copy)SetBarrageRenderViewFrameBlock barrageRenderViewFrameBlock;//实现了block回调，代理- (CGRect)barrageRenderViewOfExpressFeedView:(CorpizeAudioExpressFeedView *)expressFeedView titleFrame:(CGRect)titleFrame descFrame:(CGRect)descFrame；设置无效
//广告数据加载状态回调
@property(nonatomic,copy)CorpizeLoadExpressFeedStateBlock loadStateBlock;
//渲染广告
-(void)expressFeed;
//播放广告
-(void)startPlay;
//停止广告音频
-(void)stopPlayer;

/// 发送弹幕方法
/// @param text 发送的弹幕文字
-(void)sendBarrageWithText:(NSString*)text;

@end


