//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIClientContextPreviewContainer-Protocol.h>

@class SKUIClientContext, UIViewController;

@interface SKUIClientContextPreviewContainer : IKJSObject <SKUIClientContextPreviewContainer>
{
    SKUIClientContext *_clientContext;
    UIViewController *_previewContainerViewController;
}

- (void).cxx_destruct;
- (void)previewDocument:(id)arg1:(id)arg2;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2 previewContainerViewController:(id)arg3;

@end

