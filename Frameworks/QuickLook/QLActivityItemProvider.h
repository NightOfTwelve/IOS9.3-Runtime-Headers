//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuickLook/UIActivityItemSource-Protocol.h>

@class NSString, QLPrintPageRenderer;
@protocol QLPreviewItem;

__attribute__((visibility("hidden")))
@interface QLActivityItemProvider : NSObject <UIActivityItemSource>
{
    id <QLPreviewItem> _activityPreviewItem;
    QLPrintPageRenderer *_printPageRenderer;
}

- (id)_pdfPreviewDataAtURL:(id)arg1;
- (_Bool)_canPrint;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)printInfo;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)setPrintPageRenderer:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

