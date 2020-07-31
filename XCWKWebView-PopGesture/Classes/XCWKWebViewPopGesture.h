
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface WKWebView (XCPopGesture)

@property (nonatomic, strong, readonly) UIPanGestureRecognizer *xc_fullscreenPopGestureRecognizer;

@end

NS_ASSUME_NONNULL_END
