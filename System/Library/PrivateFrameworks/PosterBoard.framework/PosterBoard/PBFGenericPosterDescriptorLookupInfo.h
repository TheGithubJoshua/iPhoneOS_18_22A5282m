@class NSString, PRSServerPosterPath;
@protocol BSInvalidatable, PRPosterExtensionDescribing;

@interface PBFGenericPosterDescriptorLookupInfo : NSObject <PBFPosterDescriptorLookupInfo, NSCopying> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, nonatomic) PRSServerPosterPath *posterDescriptorPath;
@property (readonly, nonatomic) id<PRPosterExtensionDescribing> posterDescriptorExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullPosterDescriptorLookupInfo;
+ (id)posterDescriptorLookupInfoForPath:(id)a0 extension:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithPath:(id)a0 extension:(id)a1;
- (void)dealloc;

@end
