@class CNContactStore, _MKUserLocationView, CNMonogrammer, NSObject;
@protocol OS_dispatch_queue;

@interface _MKUserLocationViewImageProvider : NSObject {
    _MKUserLocationView *_view;
    NSObject<OS_dispatch_queue> *_queue;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
}

- (void)_updateContactImage;
- (id)init;
- (id)initWithUserLocationView:(id)a0;
- (void)_contactsChanged:(id)a0;
- (void).cxx_destruct;
- (void)_updateDefaultImage;
- (void)_updateImage;
- (id)_monogrammer;

@end
