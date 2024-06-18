@class MPModelKind, MPModelObject, MPMediaLibrary;

@interface MPModelLibraryHasPurchasesRequest : NSObject

@property (retain, nonatomic) MPModelObject *modelObject;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) MPModelKind *itemKind;

- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
