//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface NSNumber (TSCHArchivingUtilities)
+ (id)tsch_optionalNumberWithArchive:(const struct ChartsNSNumberDoubleArchive *)arg1 unarchiver:(id)arg2;
+ (void)tsch_saveOptionalNumber:(id)arg1 toArchive:(struct ChartsNSNumberDoubleArchive *)arg2 archiver:(id)arg3;
+ (id)tsch_instanceWithArchive:(const struct ChartsNSNumberDoubleArchive *)arg1 unarchiver:(id)arg2;
- (id)tsch_initWithArchive:(const struct ChartsNSNumberDoubleArchive *)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToArchive:(struct ChartsNSNumberDoubleArchive *)arg1 archiver:(id)arg2;
@end

