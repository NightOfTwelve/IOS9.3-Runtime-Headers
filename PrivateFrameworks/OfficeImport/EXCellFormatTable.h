//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXCellFormatTable : NSObject
{
}

+ (void)setDefaultWithState:(id)arg1;
+ (void)readFromCellStylesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellStyleXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readCellFormatsFrom:(struct _xmlNode *)arg1 isStyle:(_Bool)arg2 state:(id)arg3;

@end

