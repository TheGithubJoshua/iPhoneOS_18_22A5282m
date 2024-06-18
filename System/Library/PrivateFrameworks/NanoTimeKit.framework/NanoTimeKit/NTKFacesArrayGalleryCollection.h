@class NSArray;

@interface NTKFacesArrayGalleryCollection : NTKGalleryCollection

@property (copy, nonatomic) NSArray *faces;

- (void).cxx_destruct;
- (unsigned long long)numberOfFaces;
- (id)faceAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfFace:(id)a0;

@end
