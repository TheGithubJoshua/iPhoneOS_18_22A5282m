@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)class;
+ (id)alloc;
+ (BOOL)_tryRetain;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (BOOL)conformsToProtocol:(id)a0;
+ (void)release;
+ (void)initialize;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)retainWeakReference;
+ (id)autorelease;
+ (BOOL)allowsWeakReference;
+ (Class)superclass;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (id)description;
+ (unsigned long long)retainCount;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (id)debugDescription;
+ (id)retain;
+ (BOOL)_isDeallocating;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;

- (Class)class;
- (BOOL)isNSDictionary__;
- (BOOL)_tryRetain;
- (struct _NSZone { } *)zone;
- (BOOL)isNSSet__;
- (unsigned long long)_cfTypeID;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (oneway void)release;
- (BOOL)isNSValue__;
- (BOOL)isNSCFConstantString__;
- (BOOL)retainWeakReference;
- (id)autorelease;
- (BOOL)allowsWeakReference;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (BOOL)isNSTimeZone__;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNSOrderedSet__;
- (unsigned long long)retainCount;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isNSData__;
- (BOOL)isNSNumber__;
- (BOOL)isNSDate__;
- (BOOL)isNSString__;
- (BOOL)isNSObject__;
- (id)retain;
- (void)dealloc;
- (BOOL)isProxy;
- (BOOL)isNSArray__;
- (BOOL)_isDeallocating;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (id)self;
- (id)_copyDescription;

@end
