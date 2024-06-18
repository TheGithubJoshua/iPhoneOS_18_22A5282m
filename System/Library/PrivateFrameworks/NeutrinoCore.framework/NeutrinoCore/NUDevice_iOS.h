@class NURenderer;

@interface NUDevice_iOS : NUDevice {
    NURenderer *_renderer;
}

- (id)_newRenderer:(out id *)a0;
- (unsigned long long)family;
- (id)_newLowPriorityLowMemoryRendererWithoutIntermediateCaching:(out id *)a0;
- (id)_newLowPriorityNoIntermediatesRenderer:(out id *)a0;
- (long long)_preferredSampleMode;
- (id)_newRendererWithOptions:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_newLowPriorityRenderer:(out id *)a0;
- (id)_newNoIntermediatesRenderer:(out id *)a0;
- (id)initWithName:(id)a0;
- (id)_newMetalRendererWithOptions:(id)a0;

@end
