//
//  CorpizeAudioExpressFeedConfig.h
//  QCAudioAdSDK
//
//  Created by River on 2020/12/15.
//

#import <UIKit/UIKit.h>
@class CorpizeUserPlayInfo;
typedef NS_ENUM(NSUInteger, BarrageToReference) {
    audioExpressDefaults,
    audioExpressTitle,
    audioExpressDesc,
};

#pragma mark--结构体
typedef struct  {
    CGFloat top;//上边距
    CGFloat left;//左边距
    CGFloat right;//右边距
}ConfigMargin;
static inline ConfigMargin  ConfigMarginMake (CGFloat top,CGFloat left, CGFloat right)
{
    ConfigMargin magin;
    magin.top = top;
    magin.left = left;
    magin.right = right;
    return magin;
}


@interface CorpizeAudioExpressFeedConfig : NSObject


/**
 广告视图整体高度
 */
@property(nonatomic,assign)CGSize corpizeAudioExpressFeedViewSize;

/**
 标题
 */
#pragma mark--标题
//标题距离整个广告 左 右 上 边距
@property(nonatomic,assign) ConfigMargin titleMargin;
//标题字体
@property(nonatomic,assign)UIFont *titleFont;
//标题字体颜色
@property(nonatomic,strong)UIColor *titleTextColor;
//标题最多行数，默认1行
@property(nonatomic,assign)NSInteger titleMaxLineNum;

/**
 描述
 */
#pragma mark--描述
//描述距离标题上边距和整个广告 左 右 边距
@property(nonatomic,assign) ConfigMargin descMargin;
//描述字体尺寸
@property(nonatomic,strong)UIFont *descFont;
//描述字体颜色
@property(nonatomic,strong)UIColor *descTextColor;

/**
 Tip广告
 */
#pragma mark--Tip广告
//Tip广告的位置
@property(nonatomic,assign)CGPoint tipViewOrigin;
//Tip广告的尺寸（只读，不用设置）
@property(nonatomic,assign)CGSize tipViewSize;
//Tip广告的位置下载按钮背景颜色
@property(nonatomic,strong)UIColor *doneBtnBackgroundColor;
//Tip广告的背景圆角
@property(nonatomic,assign)CGFloat tipViewRadius;
//Tip广告的背景颜色
@property(nonatomic,strong)UIColor *tipViewBackgroundColor;
//Tip广告的背景阴影颜色
@property(nonatomic,strong)UIColor *tipViewShadowColor;
//Tip广告的背景阴影偏移量
@property(nonatomic,assign)CGSize tipViewShadowOffset;
//Tip广告的背景阴影圆角
@property(nonatomic,assign)CGFloat tipViewShadowRadius;
//Tip广告的头像控件位置和尺寸
@property(nonatomic,assign)CGRect tipViewHeaderViewFrame;
//Tip广告的头像控件圆角
@property(nonatomic,assign)CGFloat tipViewHeaderViewRadius;

//Tip广告的标题控件位置和尺寸
@property(nonatomic,assign)CGRect tipViewTitleLabelFrame;
//Tip广告的标题控件字体大小
@property(nonatomic,strong)UIFont *tipViewTitleLabelFont;
//Tip广告的标题控件字体颜色
@property(nonatomic,strong)UIColor *tipViewTitleLabelTextColor;
//Tip广告的描述控件位置和尺寸
@property(nonatomic,assign)CGRect tipViewDescLabelFrame;
//Tip广告的描述控件字体
@property(nonatomic,strong)UIFont *tipViewDescLabelFont;
//Tip广告的描述控件字体颜色
@property(nonatomic,strong)UIColor *tipViewDescLabelTextColor;
//Tip广告的下载按钮控件位置和尺寸
@property(nonatomic,assign)CGRect tipViewDoneBtnFrame;
//Tip广告的下载按钮控件圆角
@property(nonatomic,assign)CGFloat tipViewDoneBtnRadius;

//Tip广告的下载按钮字体大小
@property(nonatomic,strong)UIFont *tipViewDoneBtnFont;
//Tip广告的下载按钮控件字体颜色
@property(nonatomic,strong)UIColor *tipViewDoneBtnTextColor;
//Tip广告的关闭按钮控件位置和尺寸
@property(nonatomic,assign)CGRect tipViewCloseBtnFrame;
/** Tip广告的关闭按钮控 显示图片（本地图片） */
@property(nonatomic,copy)NSString *tipViewCloseBtnImageName;


/**
 自定义按钮
 */
#pragma mark--自定义按钮
//用户头像控件位置和尺寸
@property(nonatomic,assign)CGRect headerButtonFrame;
//用户头像控件位置和尺寸
@property(nonatomic,assign)CGFloat headerButtonCornerRadius;

//是否隐藏🔗链接图标
@property(nonatomic,assign)BOOL hiddenLinkIcon;
//点在控件位置和尺寸
@property(nonatomic,assign)CGRect likeButtonFrame;
//未点赞控件显示图片（本地图片）
@property(nonatomic,copy)NSString *likeDefaultImageName;
//点赞后控件显示图片（本地图片）
@property(nonatomic,copy)NSString *likeSelectImageName;
//点赞数量控件位置和尺寸
@property(nonatomic,assign)CGRect likeLabelFrame;
//点赞数量控件字体大小
@property(nonatomic,strong)UIFont *likeLabelFont;
//点赞数量控件字体颜色
@property(nonatomic,strong)UIColor *likeLabelTextColor;
//发送弹幕按钮控件位置和尺寸
@property(nonatomic,assign)CGRect barrageButtonFrame;
//发送弹幕控件显示图片
@property(nonatomic,copy)NSString *barrageImageName;
//弹幕数量控件位置和尺寸
@property(nonatomic,assign)CGRect barrageLabelFrame;
//弹幕数量控件字体大小
@property(nonatomic,strong)UIFont *barrageLabelFont;
//弹幕数量控件字体颜色
@property(nonatomic,strong)UIColor *barrageLabelTextColor;

/**
 封面
 */
#pragma mark--封面
//背景图片位置和尺寸
@property(nonatomic,assign)CGRect bgImageViewFrame;
//背景图片圆角（默认0）
@property(nonatomic,assign)CGFloat bgImageViewCornerRadius;
//封面图片位置和尺寸
@property(nonatomic,assign)CGRect coverImageViewFrame;
//封面图片圆角（默认0）
@property(nonatomic,assign)CGFloat coverImageViewCornerRadius;
//播放按钮是否隐藏（默认显示）
@property(nonatomic)BOOL playButtonHidden;
//播放按钮位置和尺寸
@property(nonatomic,assign)CGRect playButtonFrame;
//播放按钮暂停状态图片（本地图片）
@property(nonatomic,copy)NSString *playButtonPauseImageName;
//播放按钮播放状态图片(本地图片)
@property(nonatomic,copy)NSString *playButtonPlayingImageName;
//是否展示弹幕
@property(nonatomic)BOOL isShowBarrage;
//点击弹幕时 是否展示用户头像
@property(nonatomic)BOOL isShowBarrageIcon;
//弹幕头像尺寸
@property(nonatomic,assign)CGSize barrageIconSize;
//弹幕内容字体大小
@property(nonatomic,strong)UIFont *barrageTitleFont;
//弹幕内容字体颜色
@property(nonatomic,strong)NSArray<UIColor *> *barrageTitleColors;
//弹幕内容背景颜色
@property(nonatomic,strong)UIColor *barrageBgColor;
//弹幕滚动速度
@property(nonatomic,assign)CGFloat BarrageAnimationDuration;

// MARK: - 发送弹幕弹框
/** 发布背景内 视图的边距  */
@property(nonatomic,assign)CGFloat barrageBackgroundViewPaddinng;
/** 发送弹幕输入框字体大小 */
@property (nonatomic, strong) UIFont *barrageTextViewFont;
/** 发送弹幕输入框大小  */
@property(nonatomic,assign)CGRect barrageTextViewFrame;
/** 占位符 */
@property (nonatomic, copy) NSString *barrageTextViewPlaceholder;
/** 占位符颜色 */
@property (nonatomic, strong) UIColor *barrageTextViewPlaceholderColor;
/** 输入框背景颜色 */
@property (nonatomic, strong) UIColor* barrageTextViewBackgroundColor;
/** 发送按钮背景色 */
@property (nonatomic, strong) UIColor *sendBarrageButtonBackgroundColor;
/** 发送按钮Title */
@property (nonatomic, copy) NSString *sendBarrageButtonTitle;
/** 发送按钮圆角大小 */
@property (nonatomic, assign) CGFloat sendBarrageButtonCornerRadius;
/** 发送按钮字体 */
@property (nonatomic, strong) UIFont *sendBarrageButtonFont;
/** 发送弹幕背景view大小  */
@property(nonatomic,assign)CGSize sendbarrageBackgroundViewSize;
/** 发布按钮位置  */
@property(nonatomic,assign)CGRect sendBarrageButtonFrame;

/**
 用户信息自定义参数
 */
#pragma mark--用户信息自定义参数
//用户头像
@property(nonatomic,copy)NSString *avatar;
//用户ID
@property(nonatomic,copy)NSString *userId;

/**
 ivoice的sdk需要让媒体方在sdk方法中提交用户在广告请求前所听过的最近5～10条组信息，信息字段包含：标题（专辑／歌曲名称+作者+歌手等英文逗号分隔）、音频文件url、结束播放时的进度百分比
 */
// 调用者 需要传入 请求广告前 自己APP内的 最近5～10条组信息，信息字段包含：标题（专辑／歌曲名称+作者+歌手等英文逗号分隔）、音频文件url、结束播放时的进度百分比
@property(nonatomic,copy)NSArray<CorpizeUserPlayInfo*> *label;

@property(nonatomic,copy,readonly)NSString *labelString;


@end

