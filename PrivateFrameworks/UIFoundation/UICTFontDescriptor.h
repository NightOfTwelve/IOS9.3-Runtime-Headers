//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/UIFontDescriptor.h>

@interface UICTFontDescriptor : UIFontDescriptor
{
}

+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform)arg2;
+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)finalize;
- (unsigned long long)retainCount;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_cfTypeID;

@end

