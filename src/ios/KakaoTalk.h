#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>
#import "AppDelegate.h"

@interface KakaoTalk : CDVPlugin

- (void) login:(CDVInvokedUrlCommand*)command;
- (void) logout:(CDVInvokedUrlCommand*)command;
- (void) getAccessToken:(CDVInvokedUrlCommand*)command;
- (void) share:(CDVInvokedUrlCommand*)command;
- (void)openPlusFriend:(CDVInvokedUrlCommand *)command;
@end
