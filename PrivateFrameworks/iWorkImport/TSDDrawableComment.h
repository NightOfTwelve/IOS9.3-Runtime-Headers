//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDAnnotationHosting-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSDDrawableInfo, TSKAnnotationAuthor;
@protocol TSKModel;

__attribute__((visibility("hidden")))
@interface TSDDrawableComment : NSObject <TSDAnnotationHosting>
{
    TSDCommentStorage *mStorage;
    TSDDrawableInfo *mParent;
}

@property(nonatomic) TSDDrawableInfo *parent; // @synthesize parent=mParent;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSDate *date;
- (void)setAuthor:(id)arg1;
@property(readonly, nonatomic) TSKAnnotationAuthor *author;
@property(nonatomic) id <TSKModel> hostingModel;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithParent:(id)arg1 storage:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *changeTrackingContentFormatString;
@property(readonly, nonatomic) NSString *changeTrackingContentString;
@property(readonly, nonatomic) NSString *changeTrackingTitleString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

