//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognitionResult, NSArray, UIBezierPath;

@interface AKShapeToCHRecognitionResult : NSObject
{
    long long _tag;
    CHRecognitionResult *_result;
    UIBezierPath *_doodlePath;
    NSArray *_strokesInInputView;
    struct CGRect _doodlePathBoundsInInputView;
    struct CGRect _strokesBoundsInInputView;
}

@property struct CGRect strokesBoundsInInputView; // @synthesize strokesBoundsInInputView=_strokesBoundsInInputView;
@property(retain) NSArray *strokesInInputView; // @synthesize strokesInInputView=_strokesInInputView;
@property struct CGRect doodlePathBoundsInInputView; // @synthesize doodlePathBoundsInInputView=_doodlePathBoundsInInputView;
@property(retain) UIBezierPath *doodlePath; // @synthesize doodlePath=_doodlePath;
@property(retain) CHRecognitionResult *result; // @synthesize result=_result;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)initWith:(long long)arg1 result:(id)arg2;

@end
