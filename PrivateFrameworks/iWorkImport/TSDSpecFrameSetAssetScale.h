//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDSpecStroke.h>

__attribute__((visibility("hidden")))
@interface TSDSpecFrameSetAssetScale : TSDSpecStroke
{
    double _assetScale;
}

+ (id)newFromArchive:(const struct SpecFrameSetAssetScaleArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecFrameSetAssetScaleArchive *)arg2 archiver:(id)arg3;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (_Bool)canApplyOnObject:(id)arg1;
- (id)frameModifiedFromFrame:(id)arg1;
- (id)initWithCurrentProperty:(id)arg1;
- (id)initSpecFrameSetAssetScaleWithArchive:(const struct SpecFrameSetAssetScaleArchive *)arg1 unarchiver:(id)arg2;
- (void)saveSpecFrameSetAssetScaleToArchive:(struct SpecFrameSetAssetScaleArchive *)arg1 archiver:(id)arg2;

@end

