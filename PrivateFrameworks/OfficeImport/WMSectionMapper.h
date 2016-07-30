//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDSection;

__attribute__((visibility("hidden")))
@interface WMSectionMapper : CMMapper
{
    WDSection *wdSection;
    float mTopMargin;
    float mLeftMargin;
    _Bool mBreakAtStart;
    _Bool mBreakAtEnd;
    _Bool mIsTitlePage;
}

+ (_Bool)isContentEmpty:(id)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)MapSectionStyleAt:(id)arg1;
- (id)initWithWDSection:(id)arg1 breakAtStart:(_Bool)arg2 breakAtEnd:(_Bool)arg3 parent:(id)arg4;
- (void)mapFooterAt:(id)arg1 withState:(id)arg2;
- (void)mapHeaderAt:(id)arg1 withState:(id)arg2;

@end

