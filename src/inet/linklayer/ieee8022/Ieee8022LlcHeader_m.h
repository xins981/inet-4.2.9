//
// Generated file, do not edit! Created by nedtool 5.7 from inet/linklayer/ieee8022/Ieee8022LlcHeader.msg.
//

#ifndef __INET_IEEE8022LLCHEADER_M_H
#define __INET_IEEE8022LLCHEADER_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0507
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

class Ieee8022LlcHeader;
class Ieee8022LlcSnapHeader;
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace inet {

/**
 * Class generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcHeader.msg:25</tt> by nedtool.
 * <pre>
 * // ieee 802.2 LLC header
 * class Ieee8022LlcHeader extends FieldsChunk
 * {
 *     chunkLength = B(3);
 *     short dsap = -1;    // 1 byte
 *     short ssap = -1;    // 1 byte
 *     int control = -1;    // 1 or 2 byte, control = byte[0]+256*byte[1], two bytes, when (byte[0] & 3) != 3
 * }
 * </pre>
 */
class INET_API Ieee8022LlcHeader : public ::inet::FieldsChunk
{
  protected:
    short dsap = -1;
    short ssap = -1;
    int control = -1;

  private:
    void copy(const Ieee8022LlcHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee8022LlcHeader&);

  public:
    Ieee8022LlcHeader();
    Ieee8022LlcHeader(const Ieee8022LlcHeader& other);
    virtual ~Ieee8022LlcHeader();
    Ieee8022LlcHeader& operator=(const Ieee8022LlcHeader& other);
    virtual Ieee8022LlcHeader *dup() const override {return new Ieee8022LlcHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getDsap() const;
    virtual void setDsap(short dsap);
    virtual short getSsap() const;
    virtual void setSsap(short ssap);
    virtual int getControl() const;
    virtual void setControl(int control);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee8022LlcHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee8022LlcHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8022/Ieee8022LlcHeader.msg:35</tt> by nedtool.
 * <pre>
 * // ieee 802.2 LLC header with SNAP extension
 * //TODO rename to LlcWithSnap, or let separated Llc and Snap headers
 * class Ieee8022LlcSnapHeader extends Ieee8022LlcHeader
 * {
 *     chunkLength = B(8);
 *     dsap = 0xAA;
 *     ssap = 0xAA;
 *     control = 0x03;
 *     int oui = -1;   // organizationally unique identifier (OUI); 0 for protocols that have an EtherType (ARP, IPv4, IPv6, etc.), 3 bytes
 *     int protocolId = -1; // protocol identifier (PID); stores ~EtherType if orgCode is 0, 2 bytes
 * }
 * </pre>
 */
class INET_API Ieee8022LlcSnapHeader : public ::inet::Ieee8022LlcHeader
{
  protected:
    int oui = -1;
    int protocolId = -1;

  private:
    void copy(const Ieee8022LlcSnapHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee8022LlcSnapHeader&);

  public:
    Ieee8022LlcSnapHeader();
    Ieee8022LlcSnapHeader(const Ieee8022LlcSnapHeader& other);
    virtual ~Ieee8022LlcSnapHeader();
    Ieee8022LlcSnapHeader& operator=(const Ieee8022LlcSnapHeader& other);
    virtual Ieee8022LlcSnapHeader *dup() const override {return new Ieee8022LlcSnapHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getOui() const;
    virtual void setOui(int oui);
    virtual int getProtocolId() const;
    virtual void setProtocolId(int protocolId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee8022LlcSnapHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee8022LlcSnapHeader& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_IEEE8022LLCHEADER_M_H

