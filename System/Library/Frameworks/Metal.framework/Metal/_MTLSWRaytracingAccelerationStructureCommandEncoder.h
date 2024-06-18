@class NSString, _MTLCommandBuffer;
@protocol MTLComputeCommandEncoderSPI, MTLDevice, MTLCommandBuffer;

@interface _MTLSWRaytracingAccelerationStructureCommandEncoder : _MTLObjectWithLabel <MTLAccelerationStructureCommandEncoderSPI> {
    id<MTLDevice> _device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    id<MTLComputeCommandEncoderSPI> _computeEncoder;
    struct { } *_progressBins;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)updateFence:(id)a0;
- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1;
- (unsigned long long)globalTraceObjectID;
- (void)useHeap:(id)a0;
- (id)commandBuffer;
- (void)waitForFence:(id)a0;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)a0;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)endEncoding;
- (void)insertDebugSignpost:(id)a0;
- (void)substreamSynchronizeDescriptor:(id)a0;
- (void)serializeAccelerationStructure:(id)a0 toBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)buildAccelerationStructure:(id)a0 descriptor:(id)a1 scratchBuffer:(id)a2 scratchBufferOffset:(unsigned long long)a3;
- (void)copyAccelerationStructure:(id)a0 toAccelerationStructure:(id)a1;
- (void)copyAndCompactAccelerationStructure:(id)a0 toAccelerationStructure:(id)a1;
- (void)deserializeAccelerationStructure:(id)a0 fromBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)deserializeAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)deserializeInstanceAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)deserializeInstanceAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3 withDescriptor:(id)a4;
- (void)deserializePrimitiveAccelerationStructure:(id)a0 fromBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)deserializePrimitiveAccelerationStructure:(id)a0 fromBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2 withDescriptor:(id)a3;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (BOOL)isSupportedVersion:(unsigned long long)a0;
- (void)refitAccelerationStructure:(id)a0 descriptor:(id)a1 destination:(id)a2 scratchBuffer:(id)a3 scratchBufferOffset:(unsigned long long)a4;
- (void)refitAccelerationStructure:(id)a0 descriptor:(id)a1 destination:(id)a2 scratchBuffer:(id)a3 scratchBufferOffset:(unsigned long long)a4 options:(unsigned long long)a5;
- (void)serializeInstanceAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 toBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)serializePrimitiveAccelerationStructure:(id)a0 toBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)substreamSynchronizeAccelerationStructures:(id)a0;
- (void)writeAccelerationStructureSerializationData:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2;
- (void)writeCompactedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2;
- (void)writeCompactedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2 sizeDataType:(unsigned long long)a3;
- (void)writeDeserializedAccelerationStructureSize:(id)a0 serializedOffset:(unsigned long long)a1 toBuffer:(id)a2 sizeBufferOffset:(unsigned long long)a3;
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)a0 serializedOffset:(unsigned long long)a1 toBuffer:(id)a2 sizesBufferOffset:(unsigned long long)a3;
- (void)writeGenericBVHStructureOfAccelerationStructure:(id)a0 headerBuffer:(id)a1 headerBufferOffset:(unsigned long long)a2 innerNodeBuffer:(id)a3 innerNodeBufferOffset:(unsigned long long)a4 leafNodeBuffer:(id)a5 leafNodeBufferOffset:(unsigned long long)a6 primitiveBuffer:(id)a7 primitiveBufferOffset:(unsigned long long)a8 geometryBuffer:(id)a9 geometryOffset:(unsigned long long)a10 instanceTransformBuffer:(id)a11 instanceTransformOffset:(unsigned long long)a12;
- (BOOL)writeGenericBVHStructureOfAccelerationStructure:(id)a0 into:(id)a1;
- (BOOL)writeGenericBVHStructureSizesOfAccelerationStructure:(id)a0 into:(id)a1;
- (void)writeGenericBVHStructureSizesOfAccelerationStructure:(id)a0 toBuffer:(id)a1 sizesBufferOffset:(unsigned long long)a2;
- (void)writeGeometryOfAccelerationStructure:(id)a0 toBuffer:(id)a1 geometryBufferOffset:(unsigned long long)a2;
- (void)writeGeometrySizeOfAccelerationStructure:(id)a0 toBuffer:(id)a1 sizeBufferOffset:(unsigned long long)a2;
- (void)writeSerializedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 sizeBufferOffset:(unsigned long long)a2;

@end