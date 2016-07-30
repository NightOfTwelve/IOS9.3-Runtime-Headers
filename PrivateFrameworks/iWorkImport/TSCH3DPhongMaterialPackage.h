//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DMaterialPackage.h>

@class TSCH3DDiffuseMaterial, TSCH3DEmissiveMaterial, TSCH3DModulateMaterial, TSCH3DShininessMaterial, TSCH3DSpecularMaterial;

__attribute__((visibility("hidden")))
@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage
{
    TSCH3DEmissiveMaterial *_emissive;
    TSCH3DDiffuseMaterial *_diffuse;
    TSCH3DModulateMaterial *_modulate;
    TSCH3DSpecularMaterial *_specular;
    TSCH3DShininessMaterial *_shininess;
}

+ (id)package;
+ (id)instanceWithArchive:(const struct Chart3DPhongMaterialPackageArchive *)arg1 unarchiver:(id)arg2;
@property(retain, nonatomic) TSCH3DShininessMaterial *shininess; // @synthesize shininess=_shininess;
@property(retain, nonatomic) TSCH3DSpecularMaterial *specular; // @synthesize specular=_specular;
@property(retain, nonatomic) TSCH3DModulateMaterial *modulate; // @synthesize modulate=_modulate;
@property(retain, nonatomic) TSCH3DDiffuseMaterial *diffuse; // @synthesize diffuse=_diffuse;
@property(retain, nonatomic) TSCH3DEmissiveMaterial *emissive; // @synthesize emissive=_emissive;
- (id)materialEnumerator;
- (_Bool)hasCompleteData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DPhongMaterialPackageArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DPhongMaterialPackageArchive *)arg1 unarchiver:(id)arg2;

@end

