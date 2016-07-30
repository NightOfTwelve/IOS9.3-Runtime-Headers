//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebInspectorFrontend, WebView;

@interface WebInspector : NSObject
{
    WebView *_webView;
    WebInspectorFrontend *_frontend;
}

- (void)releaseFrontend;
- (void)setFrontend:(id)arg1;
- (void)evaluateInFrontend:(id)arg1 script:(id)arg2;
- (void)detach:(id)arg1;
- (void)attach:(id)arg1;
- (void)close:(id)arg1;
- (void)setTimelineProfilingEnabled:(_Bool)arg1;
- (_Bool)isTimelineProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:(_Bool)arg1;
- (_Bool)isJavaScriptProfilingEnabled;
- (void)stopProfilingJavaScript:(id)arg1;
- (void)startProfilingJavaScript:(id)arg1;
- (void)toggleProfilingJavaScript:(id)arg1;
- (_Bool)isProfilingJavaScript;
- (void)stopDebuggingJavaScript:(id)arg1;
- (void)startDebuggingJavaScript:(id)arg1;
- (void)toggleDebuggingJavaScript:(id)arg1;
- (_Bool)isDebuggingJavaScript;
- (void)showConsole:(id)arg1;
- (void)show:(id)arg1;
- (void)showWindow;
- (void)webViewClosed;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end

