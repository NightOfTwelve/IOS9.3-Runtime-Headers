//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

__attribute__((visibility("hidden")))
@interface KNSlideStyle : TSSStyle
{
}

+ (id)defaultValueForProperty:(int)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
+ (void)createStylePresetInStylesheet:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;
- (void)saveToArchive:(struct SlideStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct SlideStyleArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveSlideStylePropertyMap:(id)arg1 toArchive:(struct SlideStylePropertiesArchive *)arg2 archiver:(id)arg3;
- (void)loadSlideStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct SlideStylePropertiesArchive *)arg2 unarchiver:(id)arg3;

@end

