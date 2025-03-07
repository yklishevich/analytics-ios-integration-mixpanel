#import <Foundation/Foundation.h>
//#import <Mixpanel/Mixpanel.h>
@import Mixpanel;

#if defined(__has_include) && __has_include(<Analytics/SEGAnalytics.h>)
#import <Analytics/SEGIntegration.h>
#else
//#import <Segment/SEGIntegration.h>
@import Segment;
#endif


@interface SEGMixpanelIntegration : NSObject <SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;
@property (nonatomic, strong) Mixpanel *mixpanel;

- (instancetype)initWithSettings:(NSDictionary *)settings andMixpanel:(Mixpanel *)mixpanel;

- (instancetype)initWithSettings:(NSDictionary *)settings andLaunchOptions:(NSDictionary *)launchOptions;

@end
