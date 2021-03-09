// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: LicenseRef-ONF-Member-1.0

package kpmv2ctypes

//func createE2SMKPMIndicationMessage() *e2sm_kpm_v2.E2SmKpmIndicationMessage {
//
//	var integer int64 = 12345
//	//var rl float64 = 6789
//	var cellObjID string = "onf"
//	var granularity int32 = 21
//	var subscriptionID int64 = 12345
//	plmnID := []byte{0x21, 0x22, 0x23}
//	sst := []byte{0x01}
//	sd := []byte{0x01, 0x02, 0x03}
//	var fiveQI int32 = 10
//	var qci int32 = 15
//	var qciMin int32 = 1
//	var qciMax int32 = 15
//	var arpMax int32 = 100
//	var arpMin int32 = 10
//	var bitrateRange int32 = 251
//	var layerMuMimo int32 = 5
//	var sum int32 = 69
//	var distX int32 = 123
//	var distY int32 = 456
//	var distZ int32 = 789
//	var preLabel int32 = 11
//	var startEndIndication int32 = 1
//	var measurementName string = "trial"
//
//	labelInfoItem, _ := pdubuilder.CreateLabelInfoItem(plmnID, sst, sd, fiveQI,
//		qci, qciMax, qciMin, arpMax, arpMin, bitrateRange, layerMuMimo, sum,
//		distX, distY, distZ, preLabel, startEndIndication)
//
//	labelInfoList := e2sm_kpm_v2.LabelInfoList{
//		Value: make([]*e2sm_kpm_v2.LabelInfoItem, 0),
//	}
//	labelInfoList.Value = append(labelInfoList.Value, labelInfoItem)
//
//	measName, _ := pdubuilder.CreateMeasurementType_MeasName(measurementName)
//	measInfoItem, _ := pdubuilder.CreateMeasurementInfoItem(*measName, labelInfoList)
//
//	measInfoList := e2sm_kpm_v2.MeasurementInfoList{
//		Value: make([]*e2sm_kpm_v2.MeasurementInfoItem, 0),
//	}
//	measInfoList.Value = append(measInfoList.Value, measInfoItem)
//
//	measRecord := e2sm_kpm_v2.MeasurementRecord{
//		Value: make([]*e2sm_kpm_v2.MeasurementRecordItem, 0),
//	}
//	measRecord.Value = append(measRecord.Value, pdubuilder.CreateMeasurementRecordItem_Integer(integer))
//	measRecord.Value = append(measRecord.Value, pdubuilder.CreateMeasurementRecordItem_NoValue())
//	//measRecord.Value = append(measRecord.Value, pdubuilder.CreateMeasurementRecordItem_Real(rl))
//
//	measData := e2sm_kpm_v2.MeasurementData{
//		Value: make([]*e2sm_kpm_v2.MeasurementRecord, 0),
//	}
//	measData.Value = append(measData.Value, &measRecord)
//
//	newE2SmKpmPdu, _ := pdubuilder.CreateE2SmKpmIndicationMessage(subscriptionID, cellObjID, granularity, measInfoList, measData)
//
//	return newE2SmKpmPdu
//}
//
//func Test_xerEncodeE2SmKpmIndicationMessage(t *testing.T) {
//
//	im := createE2SMKPMIndicationMessage()
//
//	xer, err := xerEncodeE2SmKpmIndicationMessage(im)
//	assert.NilError(t, err)
//	assert.Equal(t, 1646, len(xer))
//	t.Logf("E2SmKpmIndicationMessage XER\n%s", string(xer))
//}
//
//func Test_xerDecodeE2SmKpmIndicationMessage(t *testing.T) {
//
//	im := createE2SMKPMIndicationMessage()
//
//	xer, err := xerEncodeE2SmKpmIndicationMessage(im)
//	assert.NilError(t, err)
//	assert.Equal(t, 1646, len(xer))
//	t.Logf("E2SmKpmIndicationMessage XER\n%s", string(xer))
//
//	result, err := xerDecodeE2SmKpmIndicationMessage(xer)
//	assert.NilError(t, err)
//	assert.Assert(t, result != nil)
//	t.Logf("E2SmKpmIndicationMessage XER - decoded\n%s", result)
//}
//
//func Test_perEncodeE2SmKpmIndicationMessage(t *testing.T) {
//
//	im := createE2SMKPMIndicationMessage()
//
//	per, err := perEncodeE2SmKpmIndicationMessage(im)
//	assert.NilError(t, err)
//	assert.Equal(t, 4, len(per))
//	t.Logf("E2SmKpmIndicationMessage PER\n%s", string(per))
//}
//
//func Test_perDecodeE2SmKpmIndicationMessage(t *testing.T) {
//
//	im := createE2SMKPMIndicationMessage()
//
//	per, err := perEncodeE2SmKpmIndicationMessage(im)
//	assert.NilError(t, err)
//	assert.Equal(t, 4, len(per))
//	t.Logf("E2SmKpmIndicationMessage PER\n%s", string(per))
//
//	result, err := perDecodeE2SmKpmIndicationMessage(per)
//	assert.NilError(t, err)
//	assert.Assert(t, result != nil)
//	t.Logf("E2SmKpmIndicationMessage PER - decoded\n%s", result)
//}