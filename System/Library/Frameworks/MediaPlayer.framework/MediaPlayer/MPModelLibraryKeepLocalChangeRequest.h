@class MPModelObject;

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelObject *modelObject;
@property (nonatomic) long long enableState;
@property (nonatomic) unsigned long long constraints;

- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
