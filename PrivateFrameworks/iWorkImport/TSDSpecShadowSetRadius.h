//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDSpecShadow.h>

__attribute__((visibility("hidden")))
@interface TSDSpecShadowSetRadius : TSDSpecShadow
{
    int _radius;
}

+ (id)newFromArchive:(const struct SpecShadowSetRadiusArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecShadowSetRadiusArchive *)arg2 archiver:(id)arg3;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (_Bool)canApplyOnObject:(id)arg1;
- (id)shadowModifiedFromShadow:(id)arg1;
- (id)initWithCurrentProperty:(id)arg1;
- (id)initSpecShadowSetRadiusWithArchive:(const struct SpecShadowSetRadiusArchive *)arg1 unarchiver:(id)arg2;
- (void)saveSpecShadowSetRadiusToArchive:(struct SpecShadowSetRadiusArchive *)arg1 archiver:(id)arg2;

@end

