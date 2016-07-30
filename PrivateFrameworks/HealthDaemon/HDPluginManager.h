//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol HDHealthDaemon;

@interface HDPluginManager : NSObject
{
    NSArray *_plugins;
    id <HDHealthDaemon> _healthDaemon;
    NSArray *_pluginClasses;
}

@property(retain, nonatomic) NSArray *pluginClasses; // @synthesize pluginClasses=_pluginClasses;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property(retain, nonatomic) NSArray *plugins; // @synthesize plugins=_plugins;
- (void).cxx_destruct;
- (id)queryServerForUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(id)arg5 healthDaemon:(id)arg6 queryDelegate:(id)arg7;
- (Class)_loadPrincipalClassesConformingToProtocol:(id)arg1 withBundleAtPath:(id)arg2;
- (id)_loadPrincipalClassesConformingToProtocol:(id)arg1 withBundleDirectoryPath:(id)arg2;
- (id)_pluginsPath;
- (void)loadPlugins;
- (void)_enumerateObjectsInArray:(id)arg1 conformingToProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithHealthDaemon:(id)arg1;

@end

