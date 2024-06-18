@class MPUMutableFontDescriptor, NSMutableArray;

@interface MPUFontDescriptorCache : NSObject {
    MPUMutableFontDescriptor *_reusableMutableFontDescriptor;
    unsigned long long _maximumCapacity;
    NSMutableArray *_orderedCachedFontDescriptors;
}

+ (id)sharedFontDescriptorCache;

- (id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)a0;
- (id)init;
- (id)cachedImmutableFontDescriptorForConfigurationBlock:(id /* block */)a0;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)a0;

@end
