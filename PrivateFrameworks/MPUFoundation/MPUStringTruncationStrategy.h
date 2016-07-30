//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MPUStringTruncationStrategy : NSObject
{
    NSDictionary *_textAttributes;
    NSString *_truncationTokenFormat;
    NSString *_componentsNameSingular;
    NSString *_componentsNamePlural;
    struct CGSize _drawingSize;
}

+ (id)truncationStrategyWithTextAttributes:(id)arg1 drawingSize:(struct CGSize)arg2;
@property(copy, nonatomic) NSString *componentsNamePlural; // @synthesize componentsNamePlural=_componentsNamePlural;
@property(copy, nonatomic) NSString *componentsNameSingular; // @synthesize componentsNameSingular=_componentsNameSingular;
@property(copy, nonatomic) NSString *truncationTokenFormat; // @synthesize truncationTokenFormat=_truncationTokenFormat;
@property(readonly, nonatomic) struct CGSize drawingSize; // @synthesize drawingSize=_drawingSize;
@property(readonly, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void).cxx_destruct;
- (id)initWithTextAttributes:(id)arg1 drawingSize:(struct CGSize)arg2;

@end

