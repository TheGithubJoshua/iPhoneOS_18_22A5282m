@interface FACacheImageMarqueeOperation : NSObject {
    void /* unknown type, empty encoding */ familyCircle;
    void /* unknown type, empty encoding */ lightModeKey;
    void /* unknown type, empty encoding */ darkModeKey;
    void /* unknown type, empty encoding */ imageExtension;
    void /* unknown type, empty encoding */ pictureStore;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ deviceScale;
}

- (id)init;
- (id)initWithFamilyCircle:(id)a0;
- (void).cxx_destruct;
- (void)createAndCacheData;
- (void)generateMarqueeWith:(unsigned long long)a0;

@end
