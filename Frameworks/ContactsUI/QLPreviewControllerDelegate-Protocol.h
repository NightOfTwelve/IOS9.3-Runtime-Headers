//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSURL, QLPreviewController, UIImage;
@protocol QLPreviewItem;

@protocol QLPreviewControllerDelegate <NSObject>

@optional
- (UIImage *)previewController:(QLPreviewController *)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewController:(QLPreviewController *)arg1 frameForPreviewItem:(id <QLPreviewItem>)arg2 inSourceView:(id *)arg3;
- (_Bool)previewController:(QLPreviewController *)arg1 shouldOpenURL:(NSURL *)arg2 forPreviewItem:(id <QLPreviewItem>)arg3;
- (void)previewControllerDidDismiss:(QLPreviewController *)arg1;
- (void)previewControllerWillDismiss:(QLPreviewController *)arg1;
@end

