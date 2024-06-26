@class NSMutableDictionary;

@interface TSCH3DShaderEffectsStates : NSObject <NSCopying> {
    NSMutableDictionary *_objects;
}

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setState:(id)a0 forStateInfo:(id)a1;
- (void)setValueState:(id)a0 forKey:(id)a1;
- (id)stateForStateInfo:(id)a0 createIfNil:(BOOL)a1;
- (id)valueStateForKey:(id)a0;

@end
