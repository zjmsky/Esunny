/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_QTapQuoteApi_WRAP_H_
#define SWIG_QTapQuoteApi_WRAP_H_

class SwigDirector_ITapQuoteAPINotify : public ITapQuoteAPINotify, public Swig::Director {

public:
    SwigDirector_ITapQuoteAPINotify();
    virtual void TAP_CDECL OnRspLogin(TAPIINT32 errorCode, TapAPIQuotLoginRspInfo const *info);
    virtual void TAP_CDECL OnAPIReady();
    virtual void TAP_CDECL OnDisconnect(TAPIINT32 reasonCode);
    virtual void TAP_CDECL OnRspQryCommodity(TAPIUINT32 sessionID, TAPIINT32 errorCode, TAPIYNFLAG isLast, TapAPIQuoteCommodityInfo const *info);
    virtual void TAP_CDECL OnRspQryContract(TAPIUINT32 sessionID, TAPIINT32 errorCode, TAPIYNFLAG isLast, TapAPIQuoteContractInfo const *info);
    virtual void TAP_CDECL OnRspSubscribeQuote(TAPIUINT32 sessionID, TAPIINT32 errorCode, TAPIYNFLAG isLast, TapAPIQuoteWhole const *info);
    virtual void TAP_CDECL OnRspUnSubscribeQuote(TAPIUINT32 sessionID, TAPIINT32 errorCode, TAPIYNFLAG isLast, TapAPIContract const *info);
    virtual void TAP_CDECL OnRtnQuote(TapAPIQuoteWhole const *info);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(int);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(unsigned int, int, char, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(unsigned int, int, char, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(unsigned int, int, char, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback6_t)(unsigned int, int, char, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback7_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnRspLogin, SWIG_Callback1_t callbackOnAPIReady, SWIG_Callback2_t callbackOnDisconnect, SWIG_Callback3_t callbackOnRspQryCommodity, SWIG_Callback4_t callbackOnRspQryContract, SWIG_Callback5_t callbackOnRspSubscribeQuote, SWIG_Callback6_t callbackOnRspUnSubscribeQuote, SWIG_Callback7_t callbackOnRtnQuote);

private:
    SWIG_Callback0_t swig_callbackOnRspLogin;
    SWIG_Callback1_t swig_callbackOnAPIReady;
    SWIG_Callback2_t swig_callbackOnDisconnect;
    SWIG_Callback3_t swig_callbackOnRspQryCommodity;
    SWIG_Callback4_t swig_callbackOnRspQryContract;
    SWIG_Callback5_t swig_callbackOnRspSubscribeQuote;
    SWIG_Callback6_t swig_callbackOnRspUnSubscribeQuote;
    SWIG_Callback7_t swig_callbackOnRtnQuote;
    void swig_init_callbacks();
};


#endif
