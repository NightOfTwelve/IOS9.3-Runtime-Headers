//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDRoot.h>

@class GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDLSDocument : GQDRoot
{
    GQDSStylesheet *mStylesheet;
}

+ (struct _xmlNs *)appNamespace;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg1;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileUrl:(struct __CFURL *)arg3;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)dealloc;
- (struct __CFString *)createUpgradedAppBundleResourcePath:(struct __CFString *)arg1;

@end

