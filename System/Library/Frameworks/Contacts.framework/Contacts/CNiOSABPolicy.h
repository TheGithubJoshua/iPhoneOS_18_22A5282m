@interface CNiOSABPolicy : CNPolicy <NSSecureCoding> {
    void *_iOSABPolicy;
    void *_fakePerson;
    BOOL _abSourceIsContentReadonly;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPolicy:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (BOOL)isReadonly;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;
- (BOOL)shouldAddContact:(id)a0;
- (BOOL)shouldSetValue:(id)a0 property:(id)a1 contact:(id)a2 replacementValue:(id *)a3;
- (id)supportedLabelsForContactProperty:(id)a0;
- (id)_orderedLabels:(id)a0 withOrder:(id)a1;
- (id)initWithAddressBookPolicy:(void *)a0 readOnly:(BOOL)a1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (BOOL)shouldRemoveContact:(id)a0;

@end
