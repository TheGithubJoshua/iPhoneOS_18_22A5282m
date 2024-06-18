@interface NUJSObject : NUJSProxy

+ (struct OpaqueJSClass { } *)jsClass;

- (void)enumerateProperties:(id /* block */)a0;
- (BOOL)hasProperty:(id)a0;
- (id)toObject;
- (id)toString;
- (id)JSValueWithContext:(id)a0;
- (id)valueForProperty:(id)a0 context:(id)a1 error:(out id *)a2;

@end
