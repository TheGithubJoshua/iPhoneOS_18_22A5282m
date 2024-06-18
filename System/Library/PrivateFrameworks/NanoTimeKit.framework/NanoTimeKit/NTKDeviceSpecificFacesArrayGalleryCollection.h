@class CLKDevice;

@interface NTKDeviceSpecificFacesArrayGalleryCollection : NTKFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)descriptionText;
- (id)title;
- (id)facesForDevice:(id)a0;
- (void)loadFaces;

@end
