//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBHandwritingPointFIFO.h>

@class TIHandwritingStrokes;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO
{
    TIHandwritingStrokes *_strokes;
}

@property(retain, nonatomic) TIHandwritingStrokes *strokes; // @synthesize strokes=_strokes;
- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (void)dealloc;
- (id)initWithFIFO:(id)arg1;

@end

