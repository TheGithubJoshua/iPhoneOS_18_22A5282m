@class MPModelKind, NSString, MPPropertySet;

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding> {
    struct shared_ptr<mlcore::LocalizedSearchScope> { struct LocalizedSearchScope *__ptr_; struct __shared_weak_count *__cntrl_; } _coreScope;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct shared_ptr<mlcore::LocalizedSearchScope> { struct LocalizedSearchScope *x0; struct __shared_weak_count *x1; } coreScope;
@property (retain, nonatomic) MPModelKind *itemKind;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) MPPropertySet *itemProperties;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemKind:(id)a0 name:(id)a1 properties:(id)a2;

@end
