//
//  WFIGAuthController.h
//
//  Created by William Fleming on 11/14/11.
//

#import <UIKit/UIKit.h>
#import "WFIGAuthDefaultInitialView.h"

#define DidCancelAuthNotification @ "DidCancelAuthNotification"

@interface WFIGAuthController : UIViewController<UIWebViewDelegate> {
    UIWebView *_webView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_statusLabel;
    UIButton *_startOverButton;
    UIView *_statusContainer;
    UIView<WFIGAuthInitialView> *_initialView;
    UIButton *_cancelButton;
}

+ (void)setInitialViewClass:(Class<WFIGAuthInitialView>)viewClass;

- (IBAction)gotoInstagramAuthURL:(id)sender;

@end
