@class NSString;

@interface CNUrlAddressesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)abPropertyID:(int *)a0;
- (id)init;
- (BOOL)isNonnull;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)standardLabels;

@end
