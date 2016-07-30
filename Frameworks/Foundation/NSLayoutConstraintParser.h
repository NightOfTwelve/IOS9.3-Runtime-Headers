//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface NSLayoutConstraintParser : NSObject
{
    NSString *_line;
    const char *_lineChars;
    unsigned long long _lineLength;
    unsigned long long _opts;
    _Bool _useHorizontalArrangement;
    NSDictionary *_metrics;
    NSDictionary *_views;
    id <NSLayoutItem> _containerView;
    NSMutableArray *_constraints;
    NSMutableArray *_unflushedWidthConstraints;
    NSMutableArray *_alignmentConstraints;
    unsigned long long _currentCharacter;
    NSMutableArray *_incompleteConstraints;
    id <NSLayoutItem> _parsedLeftView;
    id <NSLayoutItem> _parsedRightView;
    id <NSLayoutItem> _parsedConstrainedWidthView;
}

+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
- (void)finishConstraint;
- (void)findContainerView;
- (struct _NSRange)rangeOfName;
- (void)parseOp;
- (double)parseConstant;
- (void)parsePredicate;
- (void)parsePredicateList;
- (void)parsePredicateWithParentheses;
- (void)parseConnection;
- (void)flushWidthConstraints;
- (id)parseView;
- (void)parse;
- (id)layoutItemForKey:(id)arg1;
- (id)metricForKey:(id)arg1;
- (void)failWithDescription:(id)arg1;
- (id)description;
- (id)descriptionLineWithCurrentCharacterPointer;
- (id)constraints;
- (void)dealloc;
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;

@end

