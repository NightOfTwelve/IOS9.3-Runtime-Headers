//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorMethod.h>

__attribute__((visibility("hidden")))
@interface SCRCPhotoEvaluatorPeople : SCRCPhotoEvaluatorMethod
{
}

+ (id)_shirtColorForFaceRect:(struct CGRect)arg1 inImage:(id)arg2;
+ (id)detect:(id)arg1;
+ (int)faceLocationForFace:(struct CGRect)arg1 inImageRect:(struct CGRect)arg2;
+ (int)faceSizeForFace:(struct CGRect)arg1 inImageRect:(struct CGRect)arg2;
+ (id)detect:(id)arg1 inRect:(struct CGRect)arg2;

@end

