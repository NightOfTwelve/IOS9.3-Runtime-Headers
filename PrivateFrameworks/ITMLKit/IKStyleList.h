//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElementStyle, NSArray, NSString;

@interface IKStyleList : NSObject
{
    _Bool _requiresMediaQueryEvaluation;
    NSString *_classSelector;
    IKStyleList *_baseStyleList;
    NSArray *_styles;
    IKViewElementStyle *_resolvedStyle;
}

@property(retain, nonatomic) IKViewElementStyle *resolvedStyle; // @synthesize resolvedStyle=_resolvedStyle;
@property(readonly, copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(readonly, retain, nonatomic) IKStyleList *baseStyleList; // @synthesize baseStyleList=_baseStyleList;
@property(readonly, copy, nonatomic) NSString *classSelector; // @synthesize classSelector=_classSelector;
@property(readonly, nonatomic) _Bool requiresMediaQueryEvaluation; // @synthesize requiresMediaQueryEvaluation=_requiresMediaQueryEvaluation;
- (void).cxx_destruct;
- (void)_resolveWithMediaQueryEvaluator:(id)arg1;
- (void)setNeedsReresolution;
- (id)resolvedStyleWithMediaQueryEvaluator:(id)arg1;
- (id)initWithClassSelector:(id)arg1 styles:(id)arg2 baseStyleList:(id)arg3;

@end

